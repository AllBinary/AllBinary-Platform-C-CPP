
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
        
            #include "../../../../../java/lang/RuntimeException.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class SystemProperties
            : public Object
         {
        

    private: static const instance: SystemProperties = new SystemProperties();

    /*actual*/ public static SystemProperties getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SystemProperties.instance;
    
}


    private: const OS_NAME: string = "os.name";

    private: const OS_ARCH: string = "os.arch";

    private: const OS_VERSION: string = "os.version";

private constructor (){

            super();
        }


    /*actual*/ public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.OS_NAME;
    
}


    /*actual*/ public string getArch(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.OS_ARCH;
    
}


    /*actual*/ public string getVersion(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.OS_VERSION;
    
}


    public string getUserHomePath(){



                            throw new RuntimeException();
                    
}


};

            

