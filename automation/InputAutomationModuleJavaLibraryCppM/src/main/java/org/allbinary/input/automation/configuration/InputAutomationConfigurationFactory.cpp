
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/io/File.h>

      
#include <java/io/FileInputStream.h>

      
#include <java/util/List.h>

      
#include <javax/xml/bind/JAXBContext.h>

      
#include <javax/xml/bind/JAXBElement.h>

      
#include <javax/xml/bind/Unmarshaller.h>

      
#include <javax/xml/transform/stream/StreamSource.h>

      
#include <org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputAutomationConfiguration.h"

class InputAutomationConfigurationFactory
            : public Object
         {
        

    private: static const instance: InputAutomationConfigurationFactory = new InputAutomationConfigurationFactory();

    public static InputAutomationConfigurationFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputAutomationConfigurationFactory.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    public inputAutomationConfiguration: InputAutomationConfiguration = 
                null
            ;

private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public init(AbeClientInformationInterface abeClientInformation){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

    INPUT_AUTOMATION_CONFIGURATION: string = "InputAutomationConfiguration";;
    

    file: File = InputAutomationConfiguration.getFile()!;;
    

                        if(file.isFile())
                        
                                    {
                                    logUtil!.putF("LoadingConfiguration", INPUT_AUTOMATION_CONFIGURATION, commonStrings!.INIT);
    

    jaxbContext: JAXBContext = JAXBContext.newInstance(InputAutomationConfiguration.constructor)!;;
    

    unmarshaller: Unmarshaller = jaxbContext!.createUnmarshaller()!;;
    

    root: JAXBElement<InputAutomationConfiguration> = unmarshaller.unmarshal(new StreamSource(new FileInputStream(file)), InputAutomationConfiguration.constructor)!;;
    
this.inputAutomationConfiguration= root.getValue() as InputAutomationConfiguration;
    

    inputAutomationModuleConfigurationList: List<InputAutomationModuleConfiguration> = this.inputAutomationConfiguration!.getInputAutomationModuleConfigurationList()!;;
    
logUtil!.putF("isInstalled: " +this.inputAutomationConfiguration!.isInstalled() +" inputAutomationModuleConfigurationList: " +inputAutomationModuleConfigurationList, INPUT_AUTOMATION_CONFIGURATION, commonStrings!.INIT);
    

                        if(inputAutomationModuleConfigurationList != 
                                    null
                                )
                        
                                    {
                                    
    size: int32_t = inputAutomationModuleConfigurationList!.length!;;
    

    inputAutomationModuleConfiguration: InputAutomationModuleConfiguration;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
inputAutomationModuleConfiguration= inputAutomationModuleConfigurationList!.get(index);
    
inputAutomationModuleConfiguration!.init(abeClientInformation);
    
}


                                    }
                                
logUtil!.putF("LoadedConfiguration", INPUT_AUTOMATION_CONFIGURATION, commonStrings!.INIT);
    

                                    }
                                
                        else {
                            logUtil!.putF("New Configuration", INPUT_AUTOMATION_CONFIGURATION, commonStrings!.INIT);
    
this.inputAutomationConfiguration= new InputAutomationConfiguration();
    

                        }
                            
}


};

            

