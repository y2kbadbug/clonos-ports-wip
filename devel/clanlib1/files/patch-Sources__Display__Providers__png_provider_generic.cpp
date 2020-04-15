--- Sources/Display/Providers/png_provider_generic.cpp.orig	2006-10-27 01:55:01 UTC
+++ Sources/Display/Providers/png_provider_generic.cpp
@@ -107,7 +107,7 @@ void CL_PNGProvider_Generic::init()
 		png_destroy_read_struct(&png_ptr, &info_ptr, (png_infopp) NULL);
 		cl_assert(false);
 	}   
-	if (setjmp(png_ptr->jmpbuf))
+	if (setjmp(png_jmpbuf(png_ptr)))
 	{
 		png_destroy_read_struct(&png_ptr, &info_ptr, &end_info);
 		cl_assert(false);
