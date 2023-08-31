unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int power = 1;

	for (int i = strlen(b) - 1; i >= 0; i--) {
		if (b[i] != '0' && b[i] != '1') {
			return (0);
		}
		n += power * (b[i] - '0');
		power *= 2;
	}

	return (n);
}
