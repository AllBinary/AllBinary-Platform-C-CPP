
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_INPUT_KEYSINGLETONFACTORY_H
        #define ORG_ALLBINARY_INPUT_KEYSINGLETONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt/event/KeyEvent.h>
class StdUtil;
class LogUtil;
class CommonStrings;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class KeySingletonFactory
            : public virtual Object
         {

    private: static ABHashtable<Object*, Object*>* keyStringHashtable;

    private: static std::vector<int32_t> keyArray;

                    static int32_t initResult;
                static int32_t init();
            
    public: static ABHashtable<Object*, Object*>* getHashtable();

    public: static int32_t getInstance(int32_t index);

    public: static std::vector<int32_t> getArray();

    /*protected*/ public: LogUtil* logUtil;

private: KeySingletonFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_KEYSINGLETONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_KEYSINGLETONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_KEYSINGLETONFACTORY_H_COMPLETE
        #if __has_include(<java/awt/event/KeyEvent.h>)
#include <java/awt/event/KeyEvent.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif

        #endif
    
