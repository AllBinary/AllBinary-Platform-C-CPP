
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
        



            #include <hilog/log.h>
        
            #include "../../../../../../java/lang/Object.h"
        
#include <android/content/Context.h>

      
#include <android/os/Build.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AndroidSystemProperties
            : public Object
         {
        

    private: static const SINGLETON: AndroidSystemProperties = new AndroidSystemProperties(ResourceUtil.getInstance()!.getContext());

    public static AndroidSystemProperties getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidSystemProperties.SINGLETON;
    
}


    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

public constructor (Context context){

            super();
        }


    public string getDeviceId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.EMPTY_STRING;
    
}


    public string getDeviceSoftwareVersion(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.commonStrings!.DISABLE;
    
}


    public string getLine1Number(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.commonStrings!.DISABLE;
    
}


    public string getNetworkCountryIso(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.commonStrings!.DISABLE;
    
}


    public string getNetworkOperator(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.commonStrings!.DISABLE;
    
}


    public string getNetworkOperatorName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.commonStrings!.DISABLE;
    
}


    public string getSimCountryIso(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.commonStrings!.DISABLE;
    
}


    public string getSimOperator(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.commonStrings!.DISABLE;
    
}


    public string getSimOperatorName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.commonStrings!.DISABLE;
    
}


    public string getSimSerialNumber(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.commonStrings!.DISABLE;
    
}


    public string getSubscriberId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.commonStrings!.DISABLE;
    
}


    public string getVoiceMailAlphaTag(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.commonStrings!.DISABLE;
    
}


    public string getVoiceMailNumber(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.commonStrings!.DISABLE;
    
}


    public int32_t getNetworkType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public int32_t getPhoneType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public string getBoard(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build.BOARD;
    
}


    public string getBrand(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build.BRAND;
    
}


    public string getDevice(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build.DEVICE;
    
}


    public string getFingerprint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build.FINGERPRINT;
    
}


    public string getHost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build.HOST;
    
}


    public string getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build.ID;
    
}


    public string getModel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build.MODEL;
    
}


    public string getProduct(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build.PRODUCT;
    
}


    public string getTags(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build.TAGS;
    
}


    public int64_t getTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build.TIME;
    
}


    public string getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build.TYPE;
    
}


    public string getUser(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Build.USER;
    
}


};

            

