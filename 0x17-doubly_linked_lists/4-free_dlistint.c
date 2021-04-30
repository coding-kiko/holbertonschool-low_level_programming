#include "lists.h"

/**
 * free_dlistint - Short description
 * @head: constant number n to be summed
 * separator xd
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

void free_dlistint(dlistint_t *head)
{
  dlistint_t *fire;

  while (head)
   {
     fire = head;
     head = head->next;
     free(fire);
   }
}
