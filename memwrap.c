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
		//if head is null, set head to this mRec-t
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
	// TODO remember to free node and mPtr
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
  
