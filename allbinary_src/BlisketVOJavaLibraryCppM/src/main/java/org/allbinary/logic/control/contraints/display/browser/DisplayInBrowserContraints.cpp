
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
        



            #include "../../../../../../../java/lang/Object.h"
        
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DisplayInBrowserContraintsInterface.h"

class DisplayInBrowserContraints
            : public Object
        : public DisplayInBrowserContraintsInterface {
        

    private: frameable: bool= false;

    private: mountable: bool= false;

    private: quickFrameable: bool= false;

    private: mountedLink: string;

public constructor (Node node){

            super();
        }


    public bool isMountable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.mountable;
    
}


    public setMountable(bool mountable){
this.mountable= mountable;
    
}


    public bool isFrameable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.frameable;
    
}


    public setFrameable(bool frameable){
this.frameable= frameable;
    
}


    public bool isQuickFrameable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.quickFrameable;
    
}


    public setQuickFrameable(bool quickFrameable){
this.quickFrameable= quickFrameable;
    
}


    public string getMountedLink(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.mountedLink;
    
}


    public setMountedLink(string mountedLink){
this.mountedLink= mountedLink;
    
}


};

            

