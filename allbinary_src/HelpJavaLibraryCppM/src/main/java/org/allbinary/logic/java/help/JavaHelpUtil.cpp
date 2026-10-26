
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
        



            #include <vector>
        
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
        #include "Point.h"
#include "Dimension.h"
#include "JLabel.h"
#include "DisplayHelpFromSource.h"

class JavaHelpUtil
            : public Object
         {

    private: static JavaHelpUtil instance() { return JavaHelpUtil(); }

    public: static JavaHelpUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaHelpUtil::instance();
    
}


    public: static void main(std::vector<std::string> args){

        try {
            
    JavaHelpUtil javaHelpUtil = JavaHelpUtil::getInstance();;
    
javaHelpUtil.show(javaHelpUtil.getHelpSet("G:/mnt/bc/mydev/working/automation/InputAutomationJavaApplication/AllBinaryInputAutomationHelp/AllBinaryInputAutomation.hs"));
    

                //: 
} catch(e) 
            {
}

}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const Point point = Point(0, 0);

    private: const Dimension dimension = Dimension(640, 480);

    private: ActionEvent contextSensitiveHelpActionEvent = ActionEvent(JLabel(), ActionEvent::ACTION_FIRST, 
                            nullptr);

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

private: JavaHelpUtil(){
}


    public: HelpSet getHelpSet(std::string filePath){

        try {
            
    URI helpSetURI = File(filePath).toURI();;
    

    URL helpSetURL = helpSetURI.toURL();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getHelpSet(helpSetURL);;
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, getInstance(), "set", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: HelpSet getHelpSet(URL url){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HelpSet(
                            nullptr, url);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, getInstance(), "set", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: void show(HelpSet helpSet){

        try {
            
    HelpBroker helpBroker = helpSet.createHelpBroker();;
    
helpBroker.setLocation(this->point);
    
helpBroker.setSize(this->dimension);
    
CSH::DisplayHelpFromSource(helpBroker).actionPerformed(this->contextSensitiveHelpActionEvent);
    
this->logUtil.putF("CSH Action", getInstance(), "show");
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, getInstance(), "show", e);
    
}

}


};

            

