/**
 * @file pthread.h
 * @brief Native interoperability for devkitPro pthreads.
 */
#pragma once
#include <pthread.h>
#include "../types.h"

/**
 * @brief Gets the borrowed Horizon handle for a live pthread.
 * @param thread A live pthread identity; the caller must synchronize its lifetime.
 * @return Native handle, or INVALID_HANDLE for a null identity.
 * @note Do not close this handle. Joining or reaping the pthread invalidates it.
 */
Handle pthreadGetNativeHandle(pthread_t thread);
