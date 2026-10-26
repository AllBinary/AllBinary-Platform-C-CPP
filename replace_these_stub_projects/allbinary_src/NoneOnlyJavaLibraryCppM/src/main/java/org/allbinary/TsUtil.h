
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/InterruptedException.h"
        
            #include "java/lang/System.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //None - Do not use
class TsUtil
            : public Object
         {

    private: static TsUtil instance() { return TsUtil(); }

    public: static TsUtil getInstance();

    public: int32_t hashCode(Object* anyType);

                //@Throws(InterruptedException.constructor)
            
    public: void waitFor(Object* any, int64_t timeoutMillis);

    public: std::vector<int8_t> getRecord(Object* anyType, int32_t recordId);

    public: int32_t compareTo(std::string a, std::string b);

    public: bool equalIgnoreCase(std::string a, std::string b);

    public: bool equalsNotstring(Object* anyType, Object* object2);

    public: int32_t toNumberFromChar(char value);

    public: int32_t toNumber(int32_t value);

    public: std::vector<int8_t> getByteArray(std::string string);

    public: bool isItemListener(Object* owner);

    public: void printAvailableMethods(Object* anyType);

    public: void gc();

};

            


        #endif //ORG_ALLBINARY_TSUTIL_H
