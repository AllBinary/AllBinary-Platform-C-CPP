
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANDROID_VIEW_VIEWWRAPPER_H
        #define ORG_ALLBINARY_ANDROID_VIEW_VIEWWRAPPER_H

#include <android/view/View.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseViewWrapper.h"

class ViewWrapper: public BaseViewWrapper {
        

    private: const view: View;

public constructor (View view);

    public invalidate();

    public postInvalidate();

};

            


        #endif //ORG_ALLBINARY_ANDROID_VIEW_VIEWWRAPPER_H
