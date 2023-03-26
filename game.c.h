/* Generated by           cobc 3.1.2.0 */
/* Generated from         game.cbl */
/* Generated at           Mar 26 2023 04:14:50 */
/* GnuCOBOL build date    Sep 14 2021 19:23:38 */
/* GnuCOBOL package date  Dec 23 2020 12:04:58 UTC */
/* Compile command        cobc -x -Wall -lSDL2 -C game.cbl sdl.c */


/* Module path */
static const char		*cob_module_path = NULL;

/* Number of call parameters */
static int		cob_call_params = 0;

/* Attributes */

static const cob_field_attr a_1 =	{0x10,   1,   0, 0x1000, NULL};
static const cob_field_attr a_2 =	{0x11,   9,   0, 0x0041, NULL};
static const cob_field_attr a_3 =	{0x10,   2,   0, 0x1000, NULL};
static const cob_field_attr a_4 =	{0x01,   0,   0, 0x0000, NULL};
static const cob_field_attr a_5 =	{0x11,  17,   0, 0x0080, NULL};
static const cob_field_attr a_6 =	{0x21,   0,   0, 0x0000, NULL};
static const cob_field_attr a_7 =	{0x10,   3,   0, 0x1000, NULL};
static const cob_field_attr a_8 =	{0x21,   0,   0, 0x1000, NULL};


/* Constants */
static const cob_field c_1	= {1, (cob_u8_ptr)"0", &a_1};
static const cob_field c_2	= {2, (cob_u8_ptr)"60", &a_3};
static const cob_field c_3	= {2, (cob_u8_ptr)"80", &a_3};
static const cob_field c_4	= {3, (cob_u8_ptr)"980", &a_7};
static const cob_field c_5	= {21, (cob_u8_ptr)"assets/character.bmp\000", &a_8};
static const cob_field c_6	= {2, (cob_u8_ptr)"20", &a_3};
static const cob_field c_7	= {2, (cob_u8_ptr)"32", &a_3};
static const cob_field c_8	= {1, (cob_u8_ptr)"2", &a_1};
static const cob_field c_9	= {3, (cob_u8_ptr)"100", &a_7};
static const cob_field c_10	= {3, (cob_u8_ptr)"700", &a_7};


static COB_INLINE COB_A_INLINE int
cob_cmp_s32 (const void *p, const cob_s64_t n)
{
	int	val;
	void	*x;
	x = &val;
	optim_memcpy (x, p, 4);
	return (val < n) ? -1 : (val > n);
}
