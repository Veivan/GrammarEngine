/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.40
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package jni;

public class VectorTreeToken {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected VectorTreeToken(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(VectorTreeToken obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        desrJNI.delete_VectorTreeToken(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public VectorTreeToken() {
    this(desrJNI.new_VectorTreeToken__SWIG_0(), true);
  }

  public VectorTreeToken(long n) {
    this(desrJNI.new_VectorTreeToken__SWIG_1(n), true);
  }

  public long size() {
    return desrJNI.VectorTreeToken_size(swigCPtr, this);
  }

  public long capacity() {
    return desrJNI.VectorTreeToken_capacity(swigCPtr, this);
  }

  public void reserve(long n) {
    desrJNI.VectorTreeToken_reserve(swigCPtr, this, n);
  }

  public boolean isEmpty() {
    return desrJNI.VectorTreeToken_isEmpty(swigCPtr, this);
  }

  public void clear() {
    desrJNI.VectorTreeToken_clear(swigCPtr, this);
  }

  public void add(TreeToken x) {
    desrJNI.VectorTreeToken_add(swigCPtr, this, TreeToken.getCPtr(x), x);
  }

  public TreeToken get(int i) {
    long cPtr = desrJNI.VectorTreeToken_get(swigCPtr, this, i);
    return (cPtr == 0) ? null : new TreeToken(cPtr, false);
  }

  public void set(int i, TreeToken val) {
    desrJNI.VectorTreeToken_set(swigCPtr, this, i, TreeToken.getCPtr(val), val);
  }

}
