
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOTFACTORY_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOTFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
class HelpSet;
class HelpSetEvent;
class HelpSetListener;
class StdUtil;
class LogUtil;
class JavaHelpSetNotifier;
class InterfaceUtil;
class SecuredNativeLibraryInterface;
class CommonStrings;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InputRobotInterface;
class InputRobot;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputRobotFactory
            : public virtual Object
         {

    private: static InputRobotFactory* inputRobotFactory_owner();
    private: static InputRobotFactory* inputRobotFactory;

                //@Throws(Exception.constructor)
            
    public: static InputRobotFactory* getInstance();

                //@Throws(Exception.constructor)
            
    public: static void loadLibraries(Collection* collection);

                //@Throws(Exception.constructor)
            
    public: static void loadLibrary(InputRobotInterface* inputRobotInterface);

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: ABHashtable<Object*, Object*>* hashtable;

    private: HelpSetListener* helpSetListenerInterface;

private: InputRobotFactory();

    public: void addListener(HelpSetListener* helpSetListenerInterface);

                //@Throws(Exception.constructor)
            
    public: void add(InputRobotInterface* inputRobotInterface);

                //@Throws(Exception.constructor)
            
    public: void loadLibraries();

                //@Throws(Exception.constructor)
            
    public: void unloadLibraries();

                //@Throws(Exception.constructor)
            
    public: ABHashtable<Object*, Object*>* get();

    public: InputRobotInterface* get(std::string name);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOTFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOTFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOTFACTORY_H_COMPLETE
        #if __has_include(<java/awt/GraphicsDevice.h>)
#include <java/awt/GraphicsDevice.h>
#endif
#if __has_include(<java/awt/GraphicsEnvironment.h>)
#include <java/awt/GraphicsEnvironment.h>
#endif
#if __has_include(<java/util/Collection.h>)
#include <java/util/Collection.h>
#endif
#if __has_include(<java/util/Iterator.h>)
#include <java/util/Iterator.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<javax/help/HelpSet.h>)
#include <javax/help/HelpSet.h>
#endif
#if __has_include(<javax/help/event/HelpSetEvent.h>)
#include <javax/help/event/HelpSetEvent.h>
#endif
#if __has_include(<javax/help/event/HelpSetListener.h>)
#include <javax/help/event/HelpSetListener.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/help/JavaHelpSetNotifier.h>)
#include <org/allbinary/logic/java/help/JavaHelpSetNotifier.h>
#endif
#if __has_include(<org/allbinary/logic/java/anyType/InterfaceUtil.h>)
#include <org/allbinary/logic/java/anyType/InterfaceUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/loader/SecuredNativeLibraryInterface.h>)
#include <org/allbinary/logic/system/loader/SecuredNativeLibraryInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/input/automation/robot/InputRobotInterface.h")
#include "org/allbinary/input/automation/robot/InputRobotInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/robot/InputRobot.h")
#include "org/allbinary/input/automation/robot/InputRobot.h"
#endif

        #endif
    
