#include "lists.h"

/**
 * insert_dnodeint_at_index - Short description
 * @head: constant number n to be summed
 * @idx: index node xd
 * @n: Sum of undefined quantity of numbers
 * Return: Sum numbers
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
  dlistint_t *temp, *new_node;
  unsigned int i = 0;

  new_node = malloc(sizeof(dlistint_t));
  if (!new_node)
    return (NULL);
  new_node->n = n;
  new_node->next = NULL;
  if (!head)
    {
      *head = new_node;
      return (NULL);
    }
  if (idx == 0)
    {
      new_node->next = *head;
      *head = new_node;
      return (new_node);
    }
  temp = *head;
  while ((i < (idx - 1)) && temp)
    {
      temp = temp->next;
      i++;
    }
  if (temp)
    {
      new_node->next = temp->next;
      temp->next = new_node;
      return (new_node);
    }
  else
    return (NULL);
}
