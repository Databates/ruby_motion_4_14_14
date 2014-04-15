/*
 * Copyright 2012-present Pixate, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  PXStrokeStroke.h
//  Pixate
//
//  Created by Kevin Lindsey on 9/4/12.
//  Copyright (c) 2012 Pixate, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PXStrokeRenderer.h"

@class PXStroke;

/**
 *  PXStrokeStroke is an experimental class used to stroke the path of a path generated by another PXStrokeRenderer.
 */
@interface PXStrokeStroke : NSObject <PXStrokeRenderer>

/**
 *  The base stroke to apply to the contour. A new CGPath will be generated by applying this stroke to the contour;
 *  however, before the stroke is rendered, the strokeToApply will be applied to the generated CGPath, thus creating a
 *  stroke of a stroke
 */
@property (nonatomic, strong) PXStroke *strokeEffect;

/**
 *  The stroke to apply once the stroke effect CGPath has been generated.
 */
@property (nonatomic, strong) id<PXStrokeRenderer> strokeToApply;

@end
