typedef enum boolean{False, True};
typedef struct Account
{
	char name[50];
	char pass[21];
	char ID[5];//agent ID
	int clearance;//-1,0,1. -1 cant login, 0 is regular, 1 is admin
}Account;//User Account
extern Account emptyAccount={"0","","0000",-9};

typedef struct Date
{
	int d;
	int m;
	int y;
	int representation;//d+100m+10000y
}Date;//unrepresented dates have -1 for all fields, d=1 in CC info
extern Date emptyDate ={0};

typedef struct Address
{
	char streetAddress[50];
	char city[20];
	char adminDiv[15];
	char country[20];
}Address;
extern Address emptyAddress ={"00","00","00","00"};

typedef struct CC
{
	char cardholder[50];
	char ccNo[20];
	char authCode[4];//ASSUMING ALL CARDS HAVE 3 DIGIT AUTHCODE
	Date expiry;//Last day on which card can be used
	Address billingAddress;
}CC;
extern CC noCard = {"0","0000 0000 0000 0000","000",-1,-1,-1,-1,"-1","-1","-1","-1"};
extern CC emptyCard ={0};

typedef struct Bill
{
	unsigned usage;
	float service;//anything the company has to do fix at persons home
	float debts;
	float cost;
	struct tm start;
	struct tm end;
}Bill;
extern Bill emptyBill ={0};

typedef struct Customer
{
	char IDNo[6];
	boolean connected;//If user wants to delete record then they are disconnected
	char fName[20];
	char lName[20];
	Date dob;
	Address serviceAddress;
	//CANNOT HAVE TWO OF THE SAME ADDRESSES
	//ADDRESS HERE NEED NOT BE THE SAME AS THE ADDRESS STORED IN CCINFO
	char tel[16];
	CC cardInfo;//SHOULD CREATE SPECIAL CARD DATA FOR PEOPLE THAT DON'T HAVE CREDCARD
	float balance;//UPDATED BY FILE THAT IS READ BY PROGRAM AT START
	float leastAmount;//If customer pays 90% of bill, they will not be disconnected
	int lastReading;
	struct tm lastDate;
	struct tm payBy;//15 days in the future//IF FEES ARE UNPAID BY A CERTAIN DATE(2 MNTHS) 
	//user will be disconnected AND RECONNECTION FEE IN ADDITION TO FEES ALREADY REQUIRED
	//If user wants to be reconnected then they would have to pay user fees
	//Customer can hold talks at business place and sort this 
	Bill b;
}Customer;
extern Customer emptyCustomer ={"-9999",False,"","",0,0,0,0,"","","","","+1 512 000 0000","0","0000 0000 0000 0000","000",-1,-1,-1,-1,"-1","-1","-1","-1",-1.0,-1.0};

typedef struct Outage
{
	struct tm start;
	struct tm end;
	char region[20];//DIFFERENT REGIONS ARE GOVERNED BY DIFFERENT POWER PLANTS
}Outage;//Sorted by start date
extern Outage emptyOutage={0};
//SHOULD SECTOR BE A DATA STRUCTURE

typedef struct paymentBracket
{
	float rate;
	int minimum;
	int maximum;//IF -1 THEN THIS IS HIGHEST BRACKET
}paymentBracket;
extern paymentBracket emptBracket ={-1.0,-1,-1};

typedef struct systemFile
{
	float setup;
	paymentBracket bracket[5];
}systemFile;

typedef struct Sector
{
	char ID[4];
	char name[20];
	float setup;
	paymentBracket bracket[5];
}Sector;
extern Sector emptySector={"","",-1.0,-1.0,-1,-1,-1.0,-1,-1,-1.0,-1,-1,-1.0,-1,-1,-1.0,-1,-1};

typedef struct Emergency
{
	char description[250];
	Address address;
	struct tm incident;
}Emergency;
extern Emergency emptyEmergency={"","00","00","00","00"};

typedef struct Call
{	char callID[7];
	char custID[6];
	char agentID[5];//-939 is code for system answered call
	boolean complete;
	char fName[20];
	char lName[20];
	Emergency e;
	struct tm start;//time call was received
	struct tm agentStart;//time call was connected to agent
	struct tm systemStart;//time call was connected to system
	struct tm end;//time call was terminated
}Call;
extern Call emptyCall ={"","0","00",False,"000","0000",0,0,/*emptyAddress*/0,0,0,0,0,0,0,0,0,0,};

typedef struct CallNode
{   
   Call call; /* define data as a char */
   struct CallNode *nextPtr; /* queueNode pointer */
}CallNode; /* end structure queueNode */

typedef struct Queue
{
	CallNode *first;
	CallNode *last;
}Queue;//EVEN THOUGH WE CAN USE DYNAMIC ALLOCATION, SHOULD ALLOW MAXIMUM CALLS ON HOLD AS ACTUAL SYSTEMS CAN'T SUPPORT MORE THAN CERTAIN VALUES