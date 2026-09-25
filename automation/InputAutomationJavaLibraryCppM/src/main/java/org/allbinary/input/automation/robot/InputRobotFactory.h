
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

            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/awt.h>

      
#include <java/util/Collection.h>

      
#include <java/util/Hashtable.h>

      
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GraphicsEnvironment.h"
#include "GraphicsDevice.h"
#include "InputRobotInterface.h"
#include "InputRobot.h"

class InputRobotFactory
            : public Object
         {

    private: static const InputRobotFactory inputRobotFactory = InputRobotFactory();

                //@Throws(Exception.constructor)
            
    public: static InputRobotFactory getInstance();

                //@Throws(Exception.constructor)
            
    public: static void loadLibraries(Collection collection);

                //@Throws(Exception.constructor)
            
    public: static void loadLibrary(InputRobotInterface inputRobotInterface);

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const Hashtable<any, any> hashtable = StdUtil::getInstance().createHashtable();

    private: HelpSetListener helpSetListenerInterface;

private: InputRobotFactory();

    public: void addListener(HelpSetListener helpSetListenerInterface);

                //@Throws(Exception.constructor)
            
    public: void add(InputRobotInterface inputRobotInterface);

                //@Throws(Exception.constructor)
            
    public: void loadLibraries();

                //@Throws(Exception.constructor)
            
    public: void unloadLibraries();

                //@Throws(Exception.constructor)
            
    public: Hashtable<any, any> get();

    public: InputRobotInterface get(std::string name);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOTFACTORY_H
