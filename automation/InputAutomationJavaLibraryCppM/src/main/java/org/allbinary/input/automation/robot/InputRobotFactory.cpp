
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/awt/GraphicsDevice.h>

      
#include <java/awt/GraphicsEnvironment.h>

      
#include <java/util/Collection.h>

      
#include <java/util/Iterator.h>

      
#include <java/util/Set.h>

      
#include <javax/help/HelpSet.h>

      
#include <javax/help/event/HelpSetEvent.h>

      
#include <javax/help/event/HelpSetListener.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/help/JavaHelpSetNotifier.h>

      
#include <org/allbinary/logic/java/anyType/InterfaceUtil.h>

      
#include <org/allbinary/logic/system/loader/SecuredNativeLibraryInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/robot/InputRobotInterface.h"
#include "org/allbinary/input/automation/robot/InputRobot.h"

class InputRobotFactory
            : public Object
         {

    private: static InputRobotFactory* inputRobotFactory() { static std::unique_ptr<InputRobotFactory> value(new InputRobotFactory()); return value.get(); }

                //@Throws(Exception.constructor)
            
    public: static InputRobotFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputRobotFactory::inputRobotFactory();
    
}


                //@Throws(Exception.constructor)
            
    public: static void loadLibraries(Collection* collection){

    LogUtil* logUtil = LogUtil::getInstance();;
    
logUtil->putF("Loading Libraries", "InputRobotFactory", "loadLibraries");
    

    Iterator* iterator = collection->iterator();;
    

        while(iterator->hasNext())
        {
InputRobotFactory::loadLibrary(dynamic_cast<InputRobotInterface*>(iterator->next()));
    
}

}


                //@Throws(Exception.constructor)
            
    public: static void loadLibrary(InputRobotInterface* inputRobotInterface){

    LogUtil* logUtil = LogUtil::getInstance();;
    

                        if(InterfaceUtil::isImplemented(SecuredNativeLibraryInterface.constructor, inputRobotInterface))
                        
                                    {
                                    logUtil->putF("Loading Library: " +inputRobotInterface->getName(), "InputRobotFactory", "loadLibraries");
    

    SecuredNativeLibraryInterface* securedNativeLibraryInterface = dynamic_cast<SecuredNativeLibraryInterface*>(inputRobotInterface);;
    
securedNativeLibraryInterface->load();
    

                                    }
                                
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: ABHashtable<Object*, Object*>* hashtable = StdUtil::getInstance()->createHashtable();

    private: HelpSetListener* helpSetListenerInterface;

private: InputRobotFactory(){

        try {
            
    GraphicsEnvironment* graphenv = GraphicsEnvironment::getLocalGraphicsEnvironment();;
    

    std::vector<GraphicsDevice*> screens = graphenv->getScreenDevices();;
    

    InputRobotInterface* inputRobotInterface;;
    




                        for (
    int32_t i = 0;i < screens.size(); i++)
        {
inputRobotInterface= dynamic_cast<InputRobotInterface*>(new InputRobot(screens[i]));
    
this->logUtil->putF("Adding Robot: " +inputRobotInterface->getName(), this, "getRobots");
    
this->get()->put(inputRobotInterface->getName(), inputRobotInterface);
    
}

this->logUtil->putF("Number Of Robots: " +this->hashtable->size(), this, "getRobots");
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->putF(this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR);
    
}

}


    public: void addListener(HelpSetListener* helpSetListenerInterface){
this->helpSetListenerInterface= helpSetListenerInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: void add(InputRobotInterface* inputRobotInterface){
this->logUtil->putF("Adding InputRobotInterface: " +inputRobotInterface->getName(), this, "add");
    
this->get()->put(inputRobotInterface->getName(), inputRobotInterface);
    

    HelpSet* helpSet = inputRobotInterface->getHelpSet();;
    

                        if(this->helpSetListenerInterface != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(helpSet != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(!JavaHelpSetNotifier::isNotified(helpSet))
                        
                                    {
                                    
    HelpSetEvent* helpSetEvent = new HelpSetEvent(this, helpSet, HelpSetEvent::HELPSET_ADDED);;
    
this->helpSetListenerInterface->helpSetAdded(helpSetEvent);
    

                                    }
                                

                                    }
                                
                        else {
                            this->logUtil->putF("Null HelpSet For: " +inputRobotInterface->getName(), this, "add");
    

                        }
                            

                                    }
                                
                        else {
                            this->logUtil->putF("No HelpSet Listener", this, "add");
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void loadLibraries(){

    Set* set = this->get()->keySet();;
    
this->logUtil->putF("Loading Libraries", this, "loadLibraries");
    

    std::vector<Object*> nameArray = set->toArray();;
    

    int32_t size = nameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    InputRobotInterface* inputRobotInterface = InputRobotFactory::getInstance()->get(nameArray[index]);;
    
InputRobotFactory::loadLibrary(inputRobotInterface);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void unloadLibraries(){
this->logUtil->putF("Unloading Libraries", this, "unloadLibraries");
    

    Set* set = this->get()->keySet();;
    

    InputRobotInterface* inputRobotInterface;;
    

    std::vector<Object*> inputRobotArray = set->toArray();;
    

    int32_t size = inputRobotArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
inputRobotInterface= this->get(inputRobotArray[index]);
    

                        if(InterfaceUtil::isImplemented(SecuredNativeLibraryInterface.constructor, inputRobotInterface))
                        
                                    {
                                    this->logUtil->putF("Unloading Library: " +inputRobotInterface->getName(), this, "unloadLibraries");
    

    SecuredNativeLibraryInterface* securedNativeLibraryInterface = dynamic_cast<SecuredNativeLibraryInterface*>(inputRobotInterface);;
    
securedNativeLibraryInterface->unload();
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public: ABHashtable<Object*, Object*>* get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable;
    
}


    public: InputRobotInterface* get(std::string name){
this->logUtil->putF("Getting Robot: " +name, this, "getRobots");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<InputRobotInterface*>(this->hashtable->get(name));
    
}


};

            

