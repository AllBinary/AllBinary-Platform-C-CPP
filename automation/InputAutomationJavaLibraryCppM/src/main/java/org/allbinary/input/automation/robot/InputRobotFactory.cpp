
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOTFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/robot/InputRobotFactory.h"
        

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

auto InputRobotFactory::inputRobotFactory_owner() -> InputRobotFactory* { static std::unique_ptr<InputRobotFactory> value(new InputRobotFactory()); return value.get(); }
InputRobotFactory* InputRobotFactory::inputRobotFactory = InputRobotFactory::inputRobotFactory_owner();

                //@Throws(Exception.constructor)
            
    auto InputRobotFactory::getInstance() -> InputRobotFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InputRobotFactory::inputRobotFactory;
    
}


InputRobotFactory::InputRobotFactory() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), hashtable(StdUtil::getInstance()->createHashtable()){

        try {
            
    GraphicsEnvironment* graphenv = GraphicsEnvironment::getLocalGraphicsEnvironment();;
    

    std::vector<GraphicsDevice*> screens = graphenv->getScreenDevices();;
    

    InputRobotInterface* inputRobotInterface;;
    




                        for (
    int32_t i = 0;i < screens.size(); i++)
        {
inputRobotInterface= dynamic_cast<InputRobotInterface*>(new InputRobot(screens[i]));
    
this->logUtil->putF(JavaString::valueOf("Adding Robot: ") +JavaString::valueOf(inputRobotInterface->getName()), this, "getRobots");
    
this->get()->put(inputRobotInterface->getName(), inputRobotInterface);
    
}

this->logUtil->putF(JavaString::valueOf("Number Of Robots: ") +JavaString::valueOf(this->hashtable->size()), this, "getRobots");
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->putF(this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR);
    
}

}


    auto InputRobotFactory::addListener(HelpSetListener* helpSetListenerInterface) -> void{
this->helpSetListenerInterface= helpSetListenerInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto InputRobotFactory::add(InputRobotInterface* inputRobotInterface) -> void{
this->logUtil->putF(JavaString::valueOf("Adding InputRobotInterface: ") +JavaString::valueOf(inputRobotInterface->getName()), this, "add");
    
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
                            this->logUtil->putF(JavaString::valueOf("Null HelpSet For: ") +JavaString::valueOf(inputRobotInterface->getName()), this, "add");
    

                        }
                            

                                    }
                                
                        else {
                            this->logUtil->putF("No HelpSet Listener", this, "add");
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto InputRobotFactory::loadLibraries() -> void{

    Set* set = this->get()->keySet();;
    
this->logUtil->putF("Loading Libraries", this, "loadLibraries");
    

    std::vector<Object*> nameArray = set->toArray();;
    

    int32_t size = nameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    InputRobotInterface* inputRobotInterface = InputRobotFactory::getInstance()->get(JavaBoxes::unbox<std::string>(nameArray[index]));;
    
InputRobotFactory::loadLibrary(inputRobotInterface);
    
}

}


                //@Throws(Exception.constructor)
            
    auto InputRobotFactory::loadLibraries(Collection* collection) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    
logUtil->putF("Loading Libraries", "InputRobotFactory", "loadLibraries");
    

    Iterator* iterator = collection->iterator();;
    

        while(iterator->hasNext())
        {
InputRobotFactory::loadLibrary(dynamic_cast<InputRobotInterface*>(iterator->next()));
    
}

}


                //@Throws(Exception.constructor)
            
    auto InputRobotFactory::loadLibrary(InputRobotInterface* inputRobotInterface) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

                        if(InterfaceUtil::isImplemented(
                            Class::forType(typeid(SecuredNativeLibraryInterface)), inputRobotInterface))
                        
                                    {
                                    logUtil->putF(JavaString::valueOf("Loading Library: ") +JavaString::valueOf(inputRobotInterface->getName()), "InputRobotFactory", "loadLibraries");
    

    SecuredNativeLibraryInterface* securedNativeLibraryInterface = dynamic_cast<SecuredNativeLibraryInterface*>(inputRobotInterface);;
    
securedNativeLibraryInterface->load();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto InputRobotFactory::unloadLibraries() -> void{
this->logUtil->putF("Unloading Libraries", this, "unloadLibraries");
    

    Set* set = this->get()->keySet();;
    

    InputRobotInterface* inputRobotInterface;;
    

    std::vector<Object*> inputRobotArray = set->toArray();;
    

    int32_t size = inputRobotArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
inputRobotInterface= this->get(JavaBoxes::unbox<std::string>(inputRobotArray[index]));
    

                        if(InterfaceUtil::isImplemented(
                            Class::forType(typeid(SecuredNativeLibraryInterface)), inputRobotInterface))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Unloading Library: ") +JavaString::valueOf(inputRobotInterface->getName()), this, "unloadLibraries");
    

    SecuredNativeLibraryInterface* securedNativeLibraryInterface = dynamic_cast<SecuredNativeLibraryInterface*>(inputRobotInterface);;
    
securedNativeLibraryInterface->unload();
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto InputRobotFactory::get() -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->hashtable;
    
}


    auto InputRobotFactory::get(std::string name) -> InputRobotInterface*{
this->logUtil->putF(JavaString::valueOf("Getting Robot: ") +JavaString::valueOf(name), this, "getRobots");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<InputRobotInterface*>(this->hashtable->get(name));
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOTFACTORY_CPP
