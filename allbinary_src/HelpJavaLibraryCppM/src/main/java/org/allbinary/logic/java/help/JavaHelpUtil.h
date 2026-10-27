
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
class CSH;
class HelpBroker;
class HelpSet;
#include <javax/swing.h>
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Point;
class Dimension;
class JLabel;
class DisplayHelpFromSource;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class JavaHelpUtil
            : public virtual Object
         {

    private: static JavaHelpUtil* instance_owner();
    private: static JavaHelpUtil* instance;

    public: static JavaHelpUtil* getInstance();

    public: static void main(std::vector<std::string> args);

    /*protected*/ public: LogUtil* logUtil;

    private: Point* point;

    private: Dimension* dimension;

    private: ActionEvent* contextSensitiveHelpActionEvent;

    /*protected*/ public: CommonStrings* commonStrings;

private: JavaHelpUtil();

    public: HelpSet* getHelpSet(std::string filePath);

    public: HelpSet* getHelpSet(URL* url);

    public: void show(HelpSet* helpSet);

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_HELP_JAVAHELPUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_JAVA_HELP_JAVAHELPUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_JAVA_HELP_JAVAHELPUTIL_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<java/awt/event/ActionEvent.h>)
#include <java/awt/event/ActionEvent.h>
#endif
#if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<java/net/URI.h>)
#include <java/net/URI.h>
#endif
#if __has_include(<java/net/URL.h>)
#include <java/net/URL.h>
#endif
#if __has_include(<javax/help/CSH.h>)
#include <javax/help/CSH.h>
#endif
#if __has_include(<javax/help/HelpBroker.h>)
#include <javax/help/HelpBroker.h>
#endif
#if __has_include(<javax/help/HelpSet.h>)
#include <javax/help/HelpSet.h>
#endif
#if __has_include(<javax/swing.h>)
#include <javax/swing.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/java/help/Point.h")
#include "org/allbinary/logic/java/help/Point.h"
#endif
#if __has_include("org/allbinary/logic/java/help/Dimension.h")
#include "org/allbinary/logic/java/help/Dimension.h"
#endif
#if __has_include("org/allbinary/logic/java/help/JLabel.h")
#include "org/allbinary/logic/java/help/JLabel.h"
#endif
#if __has_include("org/allbinary/logic/java/help/DisplayHelpFromSource.h")
#include "org/allbinary/logic/java/help/DisplayHelpFromSource.h"
#endif

        #endif
    
