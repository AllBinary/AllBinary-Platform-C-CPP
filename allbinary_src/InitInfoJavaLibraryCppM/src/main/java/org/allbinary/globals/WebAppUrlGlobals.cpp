
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
        



            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/business/init/InitInfo.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UrlGlobalsInterface.h"

class WebAppUrlGlobals: public UrlGlobalsInterface {
        

    private: path: string;

    private: isWebappPathSet: bool = false;

    public bool isTestingMode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InitInfo.getInstance()!.isTesting();;
    
}


    public string getWebappPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.path;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setWebappPath(string path){
path= path;
    
this.isWebappPathSet= true;
    
}


    public string getTestHtmlPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InitInfo.getInstance()!.getTestHtmlPath();;
    
}


                //@Throws(Exception.constructor)
            
    public string getMainPath(){

    mainPath: string = InitInfo.getInstance()!.getMainPath()!;;
    

                        if(!StringValidationUtil.getInstance()!.isEmpty(mainPath))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return mainPath;
    

                                    }
                                
                             else 
                        if(this.isWebappPathSet)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getWebappPath();;
    

                                    }
                                
                        else {
                            


                            throw new Exception("Webapp Path is not set");
                    

                        }
                            
}


};

            

