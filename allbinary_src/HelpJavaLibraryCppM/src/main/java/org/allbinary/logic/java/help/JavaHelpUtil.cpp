
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_HELP_JAVAHELPUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_JAVA_HELP_JAVAHELPUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/java/help/JavaHelpUtil.h"
        

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

auto JavaHelpUtil::instance_owner() -> JavaHelpUtil* { static std::unique_ptr<JavaHelpUtil> value(new JavaHelpUtil()); return value.get(); }
JavaHelpUtil* JavaHelpUtil::instance = JavaHelpUtil::instance_owner();

    auto JavaHelpUtil::getInstance() -> JavaHelpUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaHelpUtil::instance;
    
}


JavaHelpUtil::JavaHelpUtil() : logUtil(LogUtil::getInstance()), point(new Point(0, 0)), dimension(new Dimension(640, 480)), contextSensitiveHelpActionEvent(new ActionEvent(new JLabel(), ActionEvent::ACTION_FIRST, 
                            nullptr)), commonStrings(CommonStrings::getInstance()){
}


    auto JavaHelpUtil::getHelpSet(std::string filePath) -> HelpSet*{

        try {
            
    URI* helpSetURI = (new File(filePath))->toURI();;
    

    URL* helpSetURL = helpSetURI->toURL();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getHelpSet(helpSetURL);;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, getInstance(), "set", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto JavaHelpUtil::getHelpSet(URL* url) -> HelpSet*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new HelpSet(
                            nullptr, url);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, getInstance(), "set", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto JavaHelpUtil::show(HelpSet* helpSet) -> void{

        try {
            
    HelpBroker* helpBroker = helpSet->createHelpBroker();;
    
helpBroker->setLocation(this->point);
    
helpBroker->setSize(this->dimension);
    
(new CSH::DisplayHelpFromSource(helpBroker))->actionPerformed(this->contextSensitiveHelpActionEvent);
    
this->logUtil->putF("CSH Action", getInstance(), "show");
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, getInstance(), "show", &e);
    
}

}


    auto JavaHelpUtil::main(std::vector<std::string> args) -> void{

        try {
            
    JavaHelpUtil* javaHelpUtil = JavaHelpUtil::getInstance();;
    
javaHelpUtil->show(javaHelpUtil->getHelpSet("G:/mnt/bc/mydev/working/automation/InputAutomationJavaApplication/AllBinaryInputAutomationHelp/AllBinaryInputAutomation.hs"));
    

                //: 
} catch(Exception& e) 
            {
}

}




        #endif //ORG_ALLBINARY_LOGIC_JAVA_HELP_JAVAHELPUTIL_CPP
