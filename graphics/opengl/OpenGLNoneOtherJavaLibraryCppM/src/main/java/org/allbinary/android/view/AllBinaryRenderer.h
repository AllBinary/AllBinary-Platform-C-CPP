
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
        



        #ifndef ORG_ALLBINARY_ANDROID_VIEW_ALLBINARYRENDERER_H
        #define ORG_ALLBINARY_ANDROID_VIEW_ALLBINARYRENDERER_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AllBinaryRenderer
            : public Object
         {

    private: static AllBinaryRenderer instance() { return AllBinaryRenderer(); }

    public: static AllBinaryRenderer getInstance();

    public: void setRunnable(Runnable runnable);

    public: void clearRunnable();

};

            


        #endif //ORG_ALLBINARY_ANDROID_VIEW_ALLBINARYRENDERER_H
