int rusCode(unsigned char let1, unsigned char let2) {
	if (192 <= int(let1) && 192 <= int(let2)) {
		return (int)let1 - (int)let2;
	}
	else {
		return 0;
	}
}