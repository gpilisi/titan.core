/******************************************************************************
 * Copyright (c) 2000-2016 Ericsson Telecom AB
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *   Balasko, Jeno
 *   Szabo, Janos Zoltan – initial implementation
 *
 ******************************************************************************/
#include <stdio.h>

#include "license.h"

int main(void)
{
    printf("0x%08lx\n", gethostid());

    return 0;
}
