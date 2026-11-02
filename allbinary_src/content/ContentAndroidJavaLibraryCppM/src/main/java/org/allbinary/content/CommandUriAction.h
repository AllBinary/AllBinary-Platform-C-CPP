
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
        



        #ifndef ORG_ALLBINARY_CONTENT_COMMANDURIACTION_H
        #define ORG_ALLBINARY_CONTENT_COMMANDURIACTION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Command;
class Intent;
class Uri;
class ResourceUtil;
class StdUtil;
class LogUtil;
class CommonStrings;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CommandUriAction
            : public virtual Object
         {

    private: static CommandUriAction* instance_owner();
    private: static CommandUriAction* instance;

    public: static CommandUriAction* getInstance();


            
    public: CommandUriAction();
        
    /*protected*/ public: LogUtil* logUtil;

    private: ABHashtable<Object*, Object*>* hashtable;

    public: void add(Command* command, std::string url);

    public: void process(Command* command);

    public: Intent* getIntent(Command* command);

};

            


        #endif //ORG_ALLBINARY_CONTENT_COMMANDURIACTION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_CONTENT_COMMANDURIACTION_H_COMPLETE)
        #define ORG_ALLBINARY_CONTENT_COMMANDURIACTION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<android/content/Intent.h>)
#include <android/content/Intent.h>
#endif
#if __has_include(<android/net/Uri.h>)
#include <android/net/Uri.h>
#endif
#if __has_include(<org/allbinary/data/resource/ResourceUtil.h>)
#include <org/allbinary/data/resource/ResourceUtil.h>
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
    
