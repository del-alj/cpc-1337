#include <stdio.h>
#include <stdlib.h>

typedef struct		s_move
{
	int		i;	
	struct s_move	*prev;
	struct s_move	*next;
}					t_move;

int		main()
{
	t_move	*list;
	t_move  *head;
	int		k;
	int		nb;
	int		j;

	j = 0;
	scanf("%d", &k);
	if (k > 0)
	{
		list = (t_move*)malloc(sizeof(t_move));
		head = (t_move*)malloc(sizeof(t_move));
		head = list;
		while (k > 0)
		{
			scanf("%d", &nb);
			if (nb != 0)
			{
				list->i = nb;
				list->next = (t_move*)malloc(sizeof(t_move));
				list = list->next;
				last = list;
			}
			else
				j++;
			k--;
		}
			list->next = NULL;
		while (head->next != NULL)
		{
			printf("%d\n", head->i);
			head = head->next;
		}
		while (j > 0)
		{
			printf("0\n");
			j--;
		}
	}
	return (0);
}
