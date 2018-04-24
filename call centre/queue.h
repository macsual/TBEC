/* Fig. 12.13: fig12_13.c
   Operating and maintaining a queue */
/* self-referential structure */


/* function prototypes */
int isEmpty( Queue );
Call dequeue( Queue *);
void enqueue( Queue *, Call);
/* insert a node a queue tail */
void enqueue( Queue *q, Call data )
{ 
   CallNode *newPtr; /* pointer to new node */

   newPtr = malloc( sizeof( CallNode ) );

   if ( newPtr != NULL )
   { /* is space available */ 
	  newPtr->call = data;
      newPtr->nextPtr = NULL;

      /* if empty, insert node at head */
      if ( isEmpty( *q ) ) 
	  {
		  q->first = newPtr;
      } /* end if */
      else
	  {
		  q->last->nextPtr = newPtr;
      } /* end else */

	  q->last = newPtr;//
   } /* end if */
   else
   {
      printf( "Call not inserted. No memory available.\n" );
   } /* end else */
} /* end function enqueue */
Queue createQueue()
{
	Queue q;

	q.last=q.first=NULL;
	return q;
}
/* remove node from queue head */
Call dequeue(Queue *q)//dequeue is only called when queue is not empty
{ 
	Call value; /* node value */
	CallNode *tempPtr,*tempPtr2; /* temporary node pointer */
	
	value = q->first->call;
	tempPtr = q->first;
	
	if ( q->first == q->last ) 
	{
		q->first=q->last = NULL;

	}
	else
	{
		q->first = q->first->nextPtr;
	}

	
	free( tempPtr );
	return value;
} /* end function dequeue */

/* Return 1 if the list is empty, 0 otherwise */
int isEmpty(Queue q )
{ 
	return q.first == NULL;
} /* end function isEmpty */

/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
