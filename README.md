<img width=100% src="https://capsule-render.vercel.app/api?type=waving&color=0000FF&height=120&section=header"/>

[![Typing SVG](https://readme-typing-svg.herokuapp.com/?color=0000FF&size=32&center=true&vCenter=true&width=1000&height=30&lines=Android+JNI)](https://git.io/typing-svg)


<h4 align="center">Biblioteca nativa android (C++) que verificar diretórios comuns que tem binários root</h4>
<p align="center">
  <a href="#características">Features</a>
</p>

---

A biblioteca que construir é vulnerável ataques de hooking no JNI (Java Native Interface). O objetivo é utiliza-lá para estudos vinculados as bibliotecas nativas do android.


# Características

 - A biblioteca verificar diretórios comuns que pode ter binários root

# Utilizando a mesma

```kotlin
package br.viictorjj.androidjni

import android.os.Bundle
import android.util.Log
import androidx.appcompat.app.AppCompatActivity

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        System.loadLibrary("androidjni")
        if(checkFileExists()){
            Log.e("ROOT","DETECTADO")
        }else{
            Log.e("ROOT","NÃO DETECTADO")
        }

    }

    private external fun checkFileExists(): Boolean

}

```

<img width=100% src="https://capsule-render.vercel.app/api?type=waving&color=0000FF&height=120&section=footer"/>
