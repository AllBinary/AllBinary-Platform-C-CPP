
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
        
            #include "java/lang/InterruptedException.h"
        
            #include "java/lang/System.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //None - Do not use
class TsUtil
            : public virtual Object
         {

    private: static TsUtil* instance_owner();
    private: static TsUtil* instance;

    public: static TsUtil* getInstance();


            
    public: TsUtil();
        
    public: int32_t hashCode(Object* anyType);
    public: int32_t hashCode(const std::string& anyType) { return hashCode(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> int32_t hashCode(BoxValue anyType) { return hashCode(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> int32_t hashCode(const std::vector<BoxElement>& anyType) { return hashCode(JavaBoxes::toObject(anyType)); }

                //@Throws(InterruptedException.constructor)
            
    public: void waitFor(Object* any, int64_t timeoutMillis);
    public: void waitFor(const std::string& any, int64_t timeoutMillis) { return waitFor(JavaString::box(any), timeoutMillis); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void waitFor(BoxValue any, int64_t timeoutMillis) { return waitFor(JavaBoxes::toObject(any), timeoutMillis); }
    public: template<typename BoxElement> void waitFor(const std::vector<BoxElement>& any, int64_t timeoutMillis) { return waitFor(JavaBoxes::toObject(any), timeoutMillis); }

    public: std::vector<int8_t> getRecord(Object* anyType, int32_t recordId);
    public: std::vector<int8_t> getRecord(const std::string& anyType, int32_t recordId) { return getRecord(JavaString::box(anyType), recordId); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> std::vector<int8_t> getRecord(BoxValue anyType, int32_t recordId) { return getRecord(JavaBoxes::toObject(anyType), recordId); }
    public: template<typename BoxElement> std::vector<int8_t> getRecord(const std::vector<BoxElement>& anyType, int32_t recordId) { return getRecord(JavaBoxes::toObject(anyType), recordId); }

    public: int32_t compareTo(std::string a, std::string b);

    public: bool equalIgnoreCase(std::string a, std::string b);

    public: bool equalsNotstring(Object* anyType, Object* object2);

    public: int32_t toNumberFromChar(char value);

    public: int32_t toNumber(int32_t value);

    public: std::vector<int8_t> getByteArray(std::string string);

    public: bool isItemListener(Object* owner);
    public: bool isItemListener(const std::string& owner) { return isItemListener(JavaString::box(owner)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool isItemListener(BoxValue owner) { return isItemListener(JavaBoxes::toObject(owner)); }
    public: template<typename BoxElement> bool isItemListener(const std::vector<BoxElement>& owner) { return isItemListener(JavaBoxes::toObject(owner)); }

    public: void printAvailableMethods(Object* anyType);
    public: void printAvailableMethods(const std::string& anyType) { return printAvailableMethods(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void printAvailableMethods(BoxValue anyType) { return printAvailableMethods(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> void printAvailableMethods(const std::vector<BoxElement>& anyType) { return printAvailableMethods(JavaBoxes::toObject(anyType)); }

    public: void gc();

};

            


        #endif //ORG_ALLBINARY_TSUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_TSUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_TSUTIL_H_COMPLETE
        
        #endif
    
