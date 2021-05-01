#include "lists.h"

/**
 * sum_dlistint - Short description
 * @head: constant number n to be summed
 * index node xd
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

int sum_dlistint(dlistint_t *head)
{
  dlistint_t *temp = head;
  int sum = 0;

  while (temp)
    {
      sum += temp->n;
      temp = temp->next;
    }
  return (sum);
}
