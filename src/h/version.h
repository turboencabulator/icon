
/*
 * version.h -- version identification
 */

#undef DVersion
#undef Version
#undef UVersion
#undef IVersion

/*
 * Version number to insure format of data base matches version of iconc
 *  and rtt.
 */

#define DVersion "9.0.00"

#if COMPILER

   /*
    * &version
    */
    #define Version	"Icon Version 9.3.2c.  December 20, 1999"

#else					/* COMPILER */

   /*
    *  &version
    */
   #define Version	"Icon Version 9.3.2.  December 20, 1999"
   
   /*
    * Version numbers to be sure ucode is compatible with the linker
    * and icode is compatible with the run-time system.
    */
   
   #define UVersion "U9.0.00"
   
   #ifdef FieldTableCompression
   
      #if IntBits == 16
         #define IVersion "I9.2.00FT/16"
      #endif				/* IntBits == 16 */
   
      #if IntBits == 32
         #define IVersion "I9.2.00FT/32"
      #endif				/* IntBits == 32 */
   
      #if IntBits == 64
         #define IVersion "I9.2.00FT/64"
      #endif				/* IntBits == 64 */
   
   #else				/* FieldTableCompression */
   
      #if IntBits == 16
         #define IVersion "I9.0.00/16"
      #endif				/* IntBits == 16 */
   
      #if IntBits == 32
         #define IVersion "I9.0.00/32"
      #endif				/* IntBits == 32 */
   
      #if IntBits == 64
         #define IVersion "I9.0.00/64"
      #endif				/* IntBits == 64 */
   
   #endif				/* FieldTableCompression */

#endif					/* COMPILER */

/*
 * Version number for event monitoring.
 */
#define Eversion "9.0.00"