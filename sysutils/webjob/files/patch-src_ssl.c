--- src/ssl.c.orig	2012-01-07 07:56:14 UTC
+++ src/ssl.c
@@ -241,7 +241,8 @@ SslInitializeCTX(SSL_PROPERTIES *psPrope
    *
    *********************************************************************
    */
-  psProperties->psslCTX = SSL_CTX_new(SSLv3_client_method());
+  psProperties->psslCTX = SSL_CTX_new(SSLv23_client_method());
+  SSL_CTX_set_options(psProperties->psslCTX, SSL_OP_NO_SSL2 );
   if (psProperties->psslCTX == NULL)
   {
     ERR_error_string(ERR_get_error(), acLocalError);
