
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

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <android/content/Intent.h>

      
#include <android/net/Uri.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CommandUriAction
            : public Object
         {
        

    private: static const instance: CommandUriAction = new CommandUriAction();

    public static CommandUriAction getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: hashtable: Hashtable<any, any> = new Hashtable<any, any>();

    public add(Command command, string url);

    public process(Command command);

    public Intent getIntent(Command command);

};

            


        #endif //ORG_ALLBINARY_CONTENT_COMMANDURIACTION_H
