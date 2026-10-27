
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_HELP_JAVAHELPUTIL_H
        #define ORG_ALLBINARY_LOGIC_JAVA_HELP_JAVAHELPUTIL_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/awt.h>

      
#include <java/awt/event/ActionEvent.h>

      
#include <java/io/File.h>

      
#include <java/net/URI.h>

      
#include <java/net/URL.h>

      
#include <javax/help/CSH.h>

      
#include <javax/help/HelpBroker.h>

      
#include <javax/help/HelpSet.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/java/help/Point.h"
#include "org/allbinary/logic/java/help/Dimension.h"
#include "org/allbinary/logic/java/help/JLabel.h"
#include "org/allbinary/logic/java/help/DisplayHelpFromSource.h"

class JavaHelpUtil
            : public Object
         {

    private: static JavaHelpUtil* instance() { static std::unique_ptr<JavaHelpUtil> value(new JavaHelpUtil()); return value.get(); }

    public: static JavaHelpUtil* getInstance();

    public: static void main(std::vector<std::string> args);

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: Point* point = new Point(0, 0);

    private: Dimension* dimension = new Dimension(640, 480);

    private: ActionEvent* contextSensitiveHelpActionEvent = new ActionEvent(new JLabel(), ActionEvent::ACTION_FIRST, 
                            nullptr);

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

private: JavaHelpUtil();

    public: HelpSet* getHelpSet(std::string filePath);

    public: HelpSet* getHelpSet(URL* url);

    public: void show(HelpSet* helpSet);

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_HELP_JAVAHELPUTIL_H
