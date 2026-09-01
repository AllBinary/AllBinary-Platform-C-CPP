
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
        



#include <java/util/Vector.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
#include <org/allbinary/logic/visual/theme/ThemeValidation.h>

      
#include <org/allbinary/logic/visual/transform/info/CompositeTransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StoreThemeCategoryInterface: public CategoryInterface, public TableMappingInterface, public ValidationInterface, public CompositeTransformInfoInterface {

    void addTheme(ThemeValidation themeValidation)

    Vector getThemes()

};

            

