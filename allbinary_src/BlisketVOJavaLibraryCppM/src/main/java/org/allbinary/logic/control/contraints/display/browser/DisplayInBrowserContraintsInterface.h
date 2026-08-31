
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTSINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTSINTERFACE_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DisplayInBrowserContraintsInterface {
        

    bool isMountable();

    bool isFrameable();

    bool isQuickFrameable();

    setMountable(bool canBeMounted);

    setFrameable(bool canBeFramed);

    setQuickFrameable(bool canBeQuickFramed);

    setMountedLink(string mountedLink);

    string getMountedLink();

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTSINTERFACE_H
