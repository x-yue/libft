#include "libft.h"
#include <stdio.h>

int main() {
	char **array;
	int i;

	array = ft_strsplit("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');

	i = 0;
	while (array[i]) {
		printf("word: |%s|\n", array[i]);
		i++;
	}

	return (0);
}
