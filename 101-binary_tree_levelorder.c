#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>


/**
 *enqueue - Function to enqueue a binary_tree_t in the queue
 *@queue: where to store
 *@node: node to be stored
 */

void enqueue(Queue *queue, binary_tree_t *node)
{
	QueueNode *newNode = (QueueNode *)malloc(sizeof(QueueNode));

	newNode->node = node;
	newNode->next = NULL;
	if (queue->rear == NULL)
	{
		queue->front = queue->rear = newNode;
		return;
	}
	queue->rear->next = newNode;
	queue->rear = newNode;
}

/**
 *dequeue - dequeue tree from queue
 *@queue: pointer to  node
 *Return: pointer to node to be dequeued
 */

binary_tree_t *dequeue(Queue *queue)
{
	binary_tree_t *node;
	QueueNode *temp;

	if (queue->front == NULL)
		return (NULL);
	temp = queue->front;
	node = temp->node;
	queue->front = queue->front->next;
	if (queue->front == NULL)
		queue->rear = NULL;
	free(temp);
	return (node);
}

/**
 *binary_tree_levelorder - goes through  binary tree using lot
 *@tree: pointer to root node of tree to traverse
 *@func:  pointer to function to call for each node.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	Queue queue;
	binary_tree_t *current;

	if (tree == NULL)
	return;

	queue.front = queue.rear = NULL;
	enqueue(&queue, (binary_tree_t *)tree);

	while (queue.front != NULL)
	{
		current = dequeue(&queue);
		func(current->n);

		if (current->left)
			enqueue(&queue, current->left);
		if (current->right)
			enqueue(&queue, current->right);
	}
}
