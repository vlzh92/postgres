/*
 * psql - the PostgreSQL interactive terminal
 *
 * Copyright 2000 by PostgreSQL Global Development Team
 *
 * $Header: /cvsroot/pgsql/src/bin/psql/describe.h,v 1.6 2000/01/18 23:30:23 petere Exp $
 */
#ifndef DESCRIBE_H
#define DESCRIBE_H

#include <c.h>
#include "settings.h"

/* \da */
bool describeAggregates(const char *name);

/* \df */
bool describeFunctions(const char *name, bool verbose);

/* \dT */
bool describeTypes(const char *name, bool verbose);

/* \do */
bool describeOperators(const char *name);

/* \z (or \dp) */
bool permissionsList(const char *name);

/* \dd */
bool objectDescription(const char *object);

/* \d foo */
bool describeTableDetails(const char *name, bool desc);

/* \l */
bool listAllDbs(bool desc);

/* \dt, \di, \ds, \dS, etc. */
bool listTables(const char *infotype, const char *name, bool desc);

#endif	 /* DESCRIBE_H */
