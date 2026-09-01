
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
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
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
        #include "Point.h"
#include "Dimension.h"
#include "JLabel.h"
#include "DisplayHelpFromSource.h"

class JavaHelpUtil
            : public Object
         {

    private: static JavaHelpUtil instance() { return JavaHelpUtil(); }

    public: static JavaHelpUtil getInstance();

    public: static void main(std::vector<std::string> args);

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const Point point = Point(0, 0);

    private: const Dimension dimension = Dimension(640, 480);

    private: ActionEvent contextSensitiveHelpActionEvent = ActionEvent(JLabel(), ActionEvent::ACTION_FIRST, 
                            nullptr);

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

private: JavaHelpUtil();

    public: HelpSet getHelpSet(std::string filePath);

    public: HelpSet getHelpSet(URL url);

    public: void show(HelpSet helpSet);

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_HELP_JAVAHELPUTIL_H
