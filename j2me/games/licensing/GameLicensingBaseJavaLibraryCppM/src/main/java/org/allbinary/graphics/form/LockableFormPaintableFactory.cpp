
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
        



            #include "../../../../java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ItemPaintableFactory.h"
#include "LockablePaintable.h"
#include "ItemPaintable.h"
#include "PaintableForm.h"

class LockableFormPaintableFactory: public ItemPaintableFactory {
        

    private: const lockedIndex: int32_t;

public constructor (int32_t lockedIndex){

            super();
        this.lockedIndex= lockedIndex;
    
}


                //@Throws(Exception.constructor)
            
    public ItemPaintable getInstanceItemPaintable(PaintableForm paintableForm){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new LockablePaintable(this.lockedIndex);
    
}


};

            

