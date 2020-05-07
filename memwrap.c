#include "memwrap.h"
/* Name: Alexis(Anchiao) Chen
 * PID : A16029147
 * cse30-sp20
 */

/*
 * Creates new node, sets mPtr to newly malloced memory,
 * inserts node into head of list, and returns mPtr.
 */
void *pokereate(size_t size){
	// create and allocate a new node
	mRec_t* new_mRec_t = (mRec_t*) malloc(sizeof(mRec_t));	
	//allocate mPtr for the node
	new_mRec_t -> mPtr = malloc(sizeof(size));
	//set the size to size
	new_mRec_t -> size = size;
	//allocate next
	new_mRec_t -> next  = (mRec_t*) malloc(sizeof(mRec_t));	
	//insert the node by assigning next
	if(head)
	{
		//if head is not null, set next to head
		new_mRec_t -> next = head;
		//set head to the current one
		head = new_mRec_t;
	}
	else
	{
		//if head is null, malloc head
		head = (mRec_t*) malloc(sizeof(mRec_t));
		//set head to this mRec-t
		head = new_mRec_t;
		//set next to null
		new_mRec_t -> next = NULL;
	}
	//return mPtr
	return new_mRec_t -> mPtr;
}


/*
 * Searches for an mRec with a matching mPtr. If found,
 * frees the mPtr, then removes mRec from list and frees it.
 * Returns 1 if successful, 0 if not.
 */
int pokelete(void *mPtr){
	int result = 0;		//0 not found, 1 found
/*	mRec_t* current = head;	//current mRec_t to search 
	mRec_t* previous =NULL;	// previous mRec_t to relink
	// search for mPtr
	while(current != NULL)
	{	
		//found
		if(current -> mPtr == mPtr)
		{
			//free mPtr
			free(current -> mPtr);
			//set mPtr to null
			current -> mPtr = NULL;
			//remove the node
			//if not at head
			if(current == head)
			{
				//previous point to current's next
				previous -> next = current -> next;
			}
			//if at head, no previous
			else
			{
				head = current -> next;
			}
			//free next
			free(current -> next);
			//set next to null
			current -> next = NULL;
			//free mRec
			free(current);
			//set mRec to null
			current = NULL;
			//set result to 1
			result = 1;
		}
	
		//set previous to the previous node
		previous = current;	
		//go to next mRec_t to search
		current = current -> next; 
	}
*/	//return result
	return result; 
}
  

/* Frees all pokereated blocks and metadata, and empties the list. */
void pokego() {
/*	mRec_t* current = head;	//current mRec_t to search 
	// delete everything
	while(current != NULL)
	{	
			//free mPtr
			free(current -> mPtr);
			//set mPtr to null
			current -> mPtr = NULL;
			//free next
			free(current -> next);
			//set next to null
			current -> next = NULL;
			//free mRec
			free(current);
			//set mRec to null
			current = NULL;
		//go to next mRec_t to search
		current = current -> next; 
	}
*/
}

/* Returns total number of currently-allocated blocks. */
int totalBlocks() {
	int total = 0;	//total numbers of the block 
	mRec_t* cur = head;	//current node
	while(cur != NULL)
	{
		total++;
		cur = cur -> next;
	}
	return total;
}


/*
 * Returns total number of currently-pokereated bytes (does NOT
 * include the memory used for metadata records).
 */
size_t totalBytes() {
	// TODO
}
  
