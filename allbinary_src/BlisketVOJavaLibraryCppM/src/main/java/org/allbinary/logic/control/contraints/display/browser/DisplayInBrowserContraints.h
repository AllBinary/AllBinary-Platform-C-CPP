
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTS_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTS_H

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

public constructor (Node node);

    public bool isMountable();

    public setMountable(bool mountable);

    public bool isFrameable();

    public setFrameable(bool frameable);

    public bool isQuickFrameable();

    public setQuickFrameable(bool quickFrameable);

    public string getMountedLink();

    public setMountedLink(string mountedLink);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTS_H
