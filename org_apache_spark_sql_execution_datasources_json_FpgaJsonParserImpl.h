/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_apache_spark_sql_execution_datasources_json_FpgaJsonParserImpl */

#ifndef _Included_org_apache_spark_sql_execution_datasources_json_FpgaJsonParserImpl
#define _Included_org_apache_spark_sql_execution_datasources_json_FpgaJsonParserImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_apache_spark_sql_execution_datasources_json_FpgaJsonParserImpl
 * Method:    setSchema
 * Signature: (Ljava/lang/String;[I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_apache_spark_sql_execution_datasources_json_FpgaJsonParserImpl_setSchema
  (JNIEnv *, jobject, jstring, jintArray);

/*
 * Class:     org_apache_spark_sql_execution_datasources_json_FpgaJsonParserImpl
 * Method:    parseJson
 * Signature: (Ljava/lang/String;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_apache_spark_sql_execution_datasources_json_FpgaJsonParserImpl_parseJson
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_apache_spark_sql_execution_datasources_json_FpgaJsonParserImpl
 * Method:    parseJson2
 * Signature: (Ljava/lang/String;)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_apache_spark_sql_execution_datasources_json_FpgaJsonParserImpl_parseJson2
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_apache_spark_sql_execution_datasources_json_FpgaJsonParserImpl
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_apache_spark_sql_execution_datasources_json_FpgaJsonParserImpl_close
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
