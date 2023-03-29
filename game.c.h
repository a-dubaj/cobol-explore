/* Generated by           cobc 3.1.2.0 */
/* Generated from         game.cbl */
/* Generated at           Mar 28 2023 19:36:11 */
/* GnuCOBOL build date    Sep 14 2021 19:23:38 */
/* GnuCOBOL package date  Dec 23 2020 12:04:58 UTC */
/* Compile command        cobc -x -Wall -lSDL2 -lSDL2_image -C game.cbl sdl.c */


/* Module path */
static const char		*cob_module_path = NULL;

/* Number of call parameters */
static int		cob_call_params = 0;

/* Attributes */

static const cob_field_attr a_1 =	{0x10,   1,   0, 0x1000, NULL};
static const cob_field_attr a_2 =	{0x10,   2,   0, 0x1000, NULL};
static const cob_field_attr a_3 =	{0x11,  17,   0, 0x0080, NULL};
static const cob_field_attr a_4 =	{0x11,   9,   0, 0x0041, NULL};
static const cob_field_attr a_5 =	{0x10,   1,   0, 0x0007, NULL};
static const cob_field_attr a_6 =	{0x14,  34,  17, 0x0201, NULL};
static const cob_field_attr a_7 =	{0x10,   3,   2, 0x1000, NULL};
static const cob_field_attr a_8 =	{0x21,   0,   0, 0x1000, NULL};
static const cob_field_attr a_9 =	{0x21,   0,   0, 0x0000, NULL};
static const cob_field_attr a_10 =	{0x01,   0,   0, 0x0000, NULL};
static const cob_field_attr a_11 =	{0x10,   3,   0, 0x1000, NULL};
static const cob_field_attr a_12 =	{0x10,   2,   1, 0x1000, NULL};


/* Constants */
static const cob_field c_1	= {1, (cob_u8_ptr)"2", &a_1};
static const cob_field c_2	= {2, (cob_u8_ptr)"30", &a_2};
static const cob_field c_3	= {2, (cob_u8_ptr)"70", &a_2};
static const cob_field c_4	= {2, (cob_u8_ptr)"12", &a_2};
static const cob_field c_5	= {1, (cob_u8_ptr)"8", &a_1};
static const cob_field c_6	= {1, (cob_u8_ptr)"0", &a_1};
static const cob_field c_7	= {1, (cob_u8_ptr)"3", &a_1};
static const cob_field c_8	= {1, (cob_u8_ptr)"4", &a_1};
static const cob_field c_9	= {2, (cob_u8_ptr)"-1", &a_5};
static const cob_field c_10	= {1, (cob_u8_ptr)"1", &a_1};
static const cob_field c_11	= {2, (cob_u8_ptr)"-2", &a_5};
static const cob_field c_12	= {3, (cob_u8_ptr)"005", &a_7};
static const cob_field c_13	= {1, (cob_u8_ptr)"-", &a_8};
static const cob_field c_14	= {2, (cob_u8_ptr)"32", &a_2};
static const cob_field c_15	= {1, (cob_u8_ptr)"|", &a_8};
static const cob_field c_16	= {3, (cob_u8_ptr)"---", &a_8};
static const cob_field c_17	= {2, (cob_u8_ptr)"10", &a_2};
static const cob_field c_18	= {10, (cob_u8_ptr)"Fall Fast\000", &a_8};
static const cob_field c_19	= {3, (cob_u8_ptr)"100", &a_11};
static const cob_field c_20	= {3, (cob_u8_ptr)"770", &a_11};
static const cob_field c_21	= {3, (cob_u8_ptr)"980", &a_11};
static const cob_field c_22	= {18, (cob_u8_ptr)"assets/ground.png\000", &a_8};
static const cob_field c_23	= {18, (cob_u8_ptr)"assets/player.png\000", &a_8};
static const cob_field c_24	= {16, (cob_u8_ptr)"assets/wall.png\000", &a_8};
static const cob_field c_25	= {2, (cob_u8_ptr)"96", &a_2};
static const cob_field c_26	= {3, (cob_u8_ptr)"128", &a_11};
static const cob_field c_27	= {2, (cob_u8_ptr)"00", &a_12};
static const cob_field c_28	= {3, (cob_u8_ptr)"rb\000", &a_8};


static COB_INLINE COB_A_INLINE int
cob_cmp_s32 (const void *p, const cob_s64_t n)
{
	int	val;
	void	*x;
	x = &val;
	optim_memcpy (x, p, 4);
	return (val < n) ? -1 : (val > n);
}


static COB_INLINE COB_A_INLINE void
cob_add_s32 (void *p, const int val)
{
	void	*x;
	int	n;
	x = &n;
	optim_memcpy (x, p, 4);
	n += val;
	optim_memcpy (p, x, 4);
}


static COB_INLINE COB_A_INLINE void
cob_sub_s32 (void *p, const int val)
{
	void	*x;
	int	n;
	x = &n;
	optim_memcpy (x, p, 4);
	n -= val;
	optim_memcpy (p, x, 4);
}


/* Decimal constants */
static	cob_decimal	kc_1;
static	cob_decimal	*dc_1 = NULL;
static	cob_decimal	kc_2;
static	cob_decimal	*dc_2 = NULL;
static	cob_decimal	kc_3;
static	cob_decimal	*dc_3 = NULL;
static	cob_decimal	kc_4;
static	cob_decimal	*dc_4 = NULL;
static	cob_decimal	kc_5;
static	cob_decimal	*dc_5 = NULL;
static	cob_decimal	kc_6;
static	cob_decimal	*dc_6 = NULL;
static	cob_decimal	kc_7;
static	cob_decimal	*dc_7 = NULL;
static	cob_decimal	kc_8;
static	cob_decimal	*dc_8 = NULL;

