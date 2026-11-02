
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_TSUTIL_H
        #define ORG_ALLBINARY_TSUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/ClassLoader.h"
        
            #include "java/lang/InterruptedException.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Float.h"
        
            #include "java/lang/Double.h"
        
class Displayable;
class Form;
class InvalidRecordIDException;
class RecordStore;
class RecordStoreException;
class RecordStoreNotOpenException;
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //J2SE
class TsUtil
            : public virtual Object
         {

    private: static TsUtil* instance_owner();
    private: static TsUtil* instance;

    public: static TsUtil* getInstance();


            
    public: TsUtil();
        
    public: double longBitsToDouble(int64_t bits);

    public: float intBitsToFloat(int32_t bits);

    public: int32_t hashCode(Object* anyType);
    public: int32_t hashCode(const std::string& anyType) { return hashCode(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> int32_t hashCode(BoxValue anyType) { return hashCode(JavaBoxes::toObject(anyType)); }

                //@Throws(InterruptedException.constructor)
            
    public: void waitFor(Object* any, int64_t timeoutMillis);
    public: void waitFor(const std::string& any, int64_t timeoutMillis) { return waitFor(JavaString::box(any), timeoutMillis); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void waitFor(BoxValue any, int64_t timeoutMillis) { return waitFor(JavaBoxes::toObject(any), timeoutMillis); }

                //@Throws(RecordStoreNotOpenException.constructor, InvalidRecordIDException.constructor, RecordStoreException.constructor)
            
    public: std::vector<int8_t> getRecord(Object* anyType, int32_t recordId);
    public: std::vector<int8_t> getRecord(const std::string& anyType, int32_t recordId) { return getRecord(JavaString::box(anyType), recordId); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> std::vector<int8_t> getRecord(BoxValue anyType, int32_t recordId) { return getRecord(JavaBoxes::toObject(anyType), recordId); }

    public: int32_t compareTo(std::string a, std::string b);

    public: bool equalIgnoreCase(std::string a, std::string b);

    public: bool equalsNotstring(Object* anyType, Object* object2);

    public: ClassLoader* getClassClassLoader(Object* anyType);
    public: ClassLoader* getClassClassLoader(const std::string& anyType) { return getClassClassLoader(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> ClassLoader* getClassClassLoader(BoxValue anyType) { return getClassClassLoader(JavaBoxes::toObject(anyType)); }

    public: int32_t toNumberFromChar(char value);

    public: int32_t toNumber(int32_t value);

    public: std::vector<int8_t> getByteArray(std::string string);

    public: bool isItemListener(Displayable* owner);

    public: void gc();

};

            


        #endif //ORG_ALLBINARY_TSUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_TSUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_TSUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Displayable.h>)
#include <javax/microedition/lcdui/Displayable.h>
#endif
#if __has_include(<javax/microedition/lcdui/Form.h>)
#include <javax/microedition/lcdui/Form.h>
#endif
#if __has_include(<javax/microedition/rms/InvalidRecordIDException.h>)
#include <javax/microedition/rms/InvalidRecordIDException.h>
#endif
#if __has_include(<javax/microedition/rms/RecordStore.h>)
#include <javax/microedition/rms/RecordStore.h>
#endif
#if __has_include(<javax/microedition/rms/RecordStoreException.h>)
#include <javax/microedition/rms/RecordStoreException.h>
#endif
#if __has_include(<javax/microedition/rms/RecordStoreNotOpenException.h>)
#include <javax/microedition/rms/RecordStoreNotOpenException.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif

        #endif
    
