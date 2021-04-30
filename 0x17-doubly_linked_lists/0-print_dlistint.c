#include "lists.h"

/**
 * print_dlistint - Entry point
 * @h: node to start from
 * Return: node count
 */

size_t print_dlistint(const dlistint_t *h)
{
  const dlistint_t *aux = NULL;
  size_t c = 0;

  if (h == NULL)
    return(c);
  aux = h;
  while (aux->prev != NULL)
    {
      aux = aux->prev;
    }
  while (aux != NULL)
    {
      printf("%d\n", aux->n);
      aux = aux->next;
      c++;
    }
  return(c);
}
