
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Aggression
            : public Object
         {
        

    private: ram: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(0)!;

    private: projectile: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(0)!;

    private: drops: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(0)!;

public constructor (Integer ram, Integer projectile, Integer drops){

            super();
        this.setRam(ram);
    
this.setProjectile(projectile);
    
this.setDrops(drops);
    
}


    public Integer getRam(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ram;
    
}


    public setRam(Integer ram){
this.ram= ram;
    
}


    public Integer getProjectile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.projectile;
    
}


    public setProjectile(Integer projectile){
this.projectile= projectile;
    
}


    public Integer getDrops(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.drops;
    
}


    public setDrops(Integer drops){
this.drops= drops;
    
}


};

            

