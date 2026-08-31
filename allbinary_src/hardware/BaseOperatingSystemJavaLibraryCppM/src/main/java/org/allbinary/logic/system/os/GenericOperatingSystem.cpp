
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
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/java/character/CharacterSet.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OperatingSystemInterface.h"
#include "SystemProperties.h"

class GenericOperatingSystem
            : public Object
        : public OperatingSystemInterface {
        

    private: const osName: string;

    private: const osArch: string;

    private: const osVersion: string;

    private: const characterSet: CharacterSet = new CharacterSet();

    scalable: bool = false;

public constructor (){

            super();
        
    systemProperties: SystemProperties = SystemProperties.getInstance()!;;
    

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

    EMPTY_STRING: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

                        if(stringValidationUtil!.isEmpty(systemProperties!.getName()))
                        
                                    {
                                    this.osName= EMPTY_STRING;
    

                                    }
                                
                        else {
                            this.osName= systemProperties!.getName();
    

                        }
                            

                        if(stringValidationUtil!.isEmpty(systemProperties!.getArch()))
                        
                                    {
                                    this.osArch= EMPTY_STRING;
    

                                    }
                                
                        else {
                            this.osArch= systemProperties!.getArch();
    

                        }
                            

                        if(stringValidationUtil!.isEmpty(systemProperties!.getVersion()))
                        
                                    {
                                    this.osVersion= EMPTY_STRING;
    

                                    }
                                
                        else {
                            this.osVersion= systemProperties!.getVersion();
    

                        }
                            
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.osName;
    
}


    public string getVersion(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.osVersion;
    
}


    public string getArch(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.osArch;
    
}


    public CharacterSet getCharacterSet(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.characterSet;
    
}


    public bool isOverScan(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public int32_t getOverScanXPercent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 100;
    
}


    public int32_t getOverScanYPercent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 100;
    
}


    public bool isScalable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scalable;
    
}


    public bool isAutoHide(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public string toString(){

    NEW_LINE: string = CommonSeps.getInstance()!.NEW_LINE;;
    

    osBuffer: StringMaker = new StringMaker();;
    
osBuffer!.append("Operating System Info: \n");
    
osBuffer!.append(this.getName());
    
osBuffer!.append(NEW_LINE);
    
osBuffer!.append(this.getArch());
    
osBuffer!.append(NEW_LINE);
    
osBuffer!.append(this.getVersion());
    
osBuffer!.append(NEW_LINE);
    
osBuffer!.append(StringUtil.getInstance()!.toString(this.getCharacterSet()));
    
osBuffer!.append(NEW_LINE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return osBuffer!.toString();;
    
}


};

            

