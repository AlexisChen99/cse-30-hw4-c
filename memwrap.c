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
	*mRec_t current = head;	//current mRec_t to search 
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
			//remove mRec
			current -> 
			//free mRec

			//set mRec to null
		
			//set result to 1
			result = 1;
		
		//go to next mRec_t to search
		current = head -> next; 
	}
	//return result
	return result; 
}
  

/* Frees all pokereated blocks and metadata, and empties the list. */
void pokego() {
	// TODO
}


/* Returns total number of currently-allocated blocks. */
int totalBlocks() {
	// TODO
}


/*
 * Returns total number of currently-pokereated bytes (does NOT
 * include the memory used for metadata records).
 */
size_t totalBytes() {
	// TODO
}
  
